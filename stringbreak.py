tc=raw_input().split()
a=int(tc[0])
opr=tc[1]
b=int(tc[2])
if(opr=='+'):
	print a+b
elif(opr=='*'):
	print a*b
elif(opr=='-'):
	print a-b
elif(opr=='/'):
	print a/b
else:
	print "Invalid Operator"
	
