#constraint - remval, remsum
def Convert(string): 
    li = list(string.split(","))
    return li

#returns intersection of two lists
def intersection(lst1, lst2): 
    return list(set(lst1) & set(lst2))

#print(dic)
#enter test case file name here
s = "simple/input2.txt"

fle = open(s,'r')

reader= fle.read().splitlines()

global rows
rows = int(reader[0][5:])

global colums
colums = int(reader[1][8:])

global hsums
hsums = []

global vsums
vsums = []

global consmatrix
consmatrix = []

global valmatrix
valmatrix = []

for x in range(rows):
	hsums.append(Convert(reader[3+x]))
	consmatrix.append([])
	valmatrix.append([])

for x in range(rows):
	vsums.append(Convert(reader[4+rows+x]))
	for y in range(colums):
		consmatrix[x].append([])
		valmatrix[x].append([])

fle.close()
#print(hsums)
#print(vsums)
#print(consmatrix)
#global re
#re = 0
global vartype
vartype={}
global lascons
lascons=[]
global varlist
varlist=[]
global constraints
constraints={}
global remdomain
remdomain=[1,2,3,4,5,6,7,8,9]

for x in range(rows):
	for y in range(len(hsums[x])):
		if(hsums[x][y]=='#' and vsums[x][y]=='#'):
			valmatrix[x][y]='#'
			continue
		if(hsums[x][y]=='0' and vsums[x][y]=='0'):
			consmatrix[x][y].append(lascons)
			constraints[str(lascons[0])+"_"+str(lascons[1])+"_h"][2]+=1
			varlist.append([x,y]);
		elif(hsums[x][y]!='#' and hsums[x][y]!='0'):
			constraints[str(x)+"_"+str(y)+"_h"]=[[1,2,3,4,5,6,7,8,9],int(hsums[x][y]),0]
			valmatrix[x][y]='S'
			lascons=[x,y]	
for x in range(colums):
	for y in range(rows):
		if(hsums[y][x]=='#' and vsums[y][x]=='#'):
			valmatrix[y][x]='#'
			continue
		if(hsums[y][x]=='0' and vsums[y][x]=='0'):
			consmatrix[y][x].append(lascons)
			constraints[str(lascons[0])+"_"+str(lascons[1])+"_v"][2]+=1
		elif(vsums[y][x]!='#' and vsums[y][x]!='0'):
			constraints[str(y)+"_"+str(x)+"_v"]=[[1,2,3,4,5,6,7,8,9],int(vsums[y][x]),0]
			valmatrix[y][x]='S'
			lascons=[y,x] 

print(consmatrix)
print()
print(varlist)
print()
print(constraints)

def legalassignment(a,re):
	#print(a,"a val")
	#print(len(varlist))
	if(a<len(varlist)):
		i=varlist[a][0]
		j=varlist[a][1]
		m = consmatrix[i][j][0]
		n = consmatrix[i][j][1]
		k = str(m[0])+"_"+str(m[1])+"_h"
		l = str(n[0])+"_"+str(n[1])+"_v"
		#print(k,l)
		cpylis = constraints[k][0].copy()
		cpy2lis = constraints[l][0].copy()
		cpy3lis = intersection(cpylis,cpy2lis)
		#print(cpy3lis)
		for b in cpy3lis:
			#print("range")
			if(b <= constraints[k][1] and b <= constraints[l][1] ):
				#print(a,b,"abval")
				if (b in constraints[k][0]) and (b in constraints[l][0]) :
					#print("got inside")
					if(( constraints[k][2] == 1 and b != constraints[k][1]) or ( constraints[l][2] == 1 and b != constraints[l][1])):
						continue
					#print(constraints)
					constraints[k][1] -= b
					constraints[l][1] -= b
					cpylis=constraints[k][0].copy()
					cpylis.remove(b)
					constraints[k][0]=cpylis
					#print(constraints)
					cpy2lis=constraints[l][0].copy()
					cpy2lis.remove(b)
					constraints[l][0]=cpy2lis
					#print(constraints)
					constraints[k][2]-=1
					constraints[l][2]-=1
					if(constraints[l][2]==0):
						re +=1
						if(re == len(constraints)):
							valmatrix[i][j] = b
							return True 
					if(constraints[k][2]==0):
						re +=1
						if(re == len(constraints)):
							valmatrix[i][j] = b
							return True 

					#print(constraints)
					#a+=1
					if(legalassignment(a+1,re) == True):
						valmatrix[i][j] = b
						return True
					#a-=1
					#print("false return")
					constraints[k][1] += b
					constraints[l][1] += b
					constraints[l][0].append(b)
					constraints[k][0].append(b)
					if(constraints[l][2]==0):
						re -=1
					if(constraints[k][2]==0):
						re -=1
					constraints[k][2]+=1
					constraints[l][2]+=1
		return False			
filename = "sol.txt"
sm = open(filename,'w')
print(s[6:],file = sm)		
				
if(legalassignment(0,0) == True):
	print("horizontal",file = sm)
	for x in range(rows):
		print(reader[3+x],file = sm)
	print("vertical",file = sm)
	for x in range(rows):
		print(reader[4+x+rows],file = sm)
	print("ans",file = sm)
	for x in range(rows):
		print(" ".join(map(str,valmatrix[x])),file = sm)
	print("",file = sm)
else:
	print("ERRROR")
		
sm.close()
