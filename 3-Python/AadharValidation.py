print("*"*60)
print("\n ASSESSMENT-1  AADHAAR CARD VALIDATION")
print("\n NAME:S.PRIYADHARSHINI  E.NO:27548  COURSE:ADPP  FACULTY:MAHAJOTHI ")
print("*"*60)    
def fun1():
          global num
          global a
          num = input("Enter The Aadhaar No : ")
          null()
          length()
          digit()
          space()
          fun2()
          last()
          fun3()
def null():
    if(len(num)==0):
        print("Null input should not be accepted")
        fun1()
    else:
        pass
def length():
    if(len(num)==14):
        pass
    else:
        print("Input should be 14 digits ")
        fun1()       
def digit():
    if(num[0].isdigit() and num[1].isdigit() and num[2].isdigit() and num[3].isdigit()  and num[5].isdigit() and num[6].isdigit() and num[7].isdigit() and num[8].isdigit()  and num[10].isdigit() and num[11].isdigit() and num[12].isdigit() and num[13].isdigit()):
        pass
    else:
        print("Should Not contain any alphabet or special character")
        fun1()
def space():
    if(num[4]==' ' and num[9]==' '):
        pass
    else:
        print("Should have space at 5th & 10th digit")
        fun1()
def fun2():
    if((num[0]=='0' or num[0]=='1')):
        print("First Digit must not be 0 or 1")
        fun1()

def last():
    print("Your Entered Aadhaar Number Is "+num+" Correct")
def fun3():
    a=input("Do You Want to run The Program Again ?(Y/N)")
    if(len(a)==0):
        print("Null Input Is not Accepted")
        fun3()
    elif(len(a)!=1):
        print("\n input must be y or n")
        fun3()
    elif(a[0]=='y' or a[0]=='Y'):

        fun1()
        null()
        length()
        digit()
        space()
        fun2()
    elif(a[0]=='N' or a[0]=='n'):
        print("Program Ended")
    else:
        print("\n input must be y or n")
        fun3()        
fun1()
null()
length()
digit()
space()
fun2()
