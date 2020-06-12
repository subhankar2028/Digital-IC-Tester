import serial
from guizero import App, Text, PushButton,info  #imported the app class
ComPort = serial.Serial('COM5') # open COM5
ComPort.baudrate = 9600          # set Baud rate 
ComPort.bytesize = 8             # Number of data bits = 8
ComPort.parity = 'N'             # No parity
ComPort.stopbits = 1             # Number of Stop bits = 1
        
app = App(title="DIT",width=300, height =200, layout="grid")      #name of the app is "IDS"
welcome_message = Text(app, text="DIGITAL IC TESTER", size=20, font="Times New Roman", color="blue",grid=[5,2],align="left") #or you can use hex code of colour (#ff0000)




def S_Com():
            while True:
                Read_Com=ComPort.read(size=2)
                print(Read_Com)               
                print(type(Read_Com))
                if Read_Com==b'1\r':
                        info("Ordered","AND GATE")
                elif Read_Com==b'2\r':
                        info("Ordered","NAND GATE")
                elif Read_Com==b'3\r':
                        info("Ordered","OR GATE")
                elif Read_Com==b'4\r':
                        info("Ordered","NOR GATE")
                elif Read_Com==b'5\r':
                        info("Ordered","XOR GATE")
                elif Read_Com==b'6\r':
                        info("Ordered","XNOR GATE")
                elif Read_Com==b'7\r':
                        info("Ordered","NOT GATE")
                else:
                    print("iC not found")

                    
Run_Comport=PushButton(app, command=S_Com, text="CLICK TO TEST",grid=[5,5], align="top")

app.display()               #Display the app



