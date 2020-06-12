
int val=0;
int A[] = {0, 1, 0, 1};
int B[] = {0, 0, 1, 1};
int output[4];
int andOut[]={0,0,0,1};   //7408
int nandOut[]={1,1,1,0};  //7400
int orOut[]={0,1,1,1};    //7432
int norOut[]={1,0,0,0};   //7402
int xorOut[]={0,1,1,0};   //7486
int xnorOut[]={1,0,0,1};
 

void setup() 
{
  // FOR ALL ACCEPT NOT
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(5, INPUT);

  //FOR NOR
  pinMode(3, OUTPUT); 
  pinMode(2, OUTPUT);
  pinMode(4, INPUT);  

//FOR NOT GATE
pinMode(A1, INPUT);
pinMode(A3, INPUT);
pinMode(A5, INPUT);

pinMode(A0, OUTPUT);
pinMode(A2, OUTPUT);
pinMode(A4, OUTPUT);
  
  Serial.begin(9600);


}

void loop()
{
  for(int i=0;i<4;i++)
  {
     digitalWrite(6,A[i]);
     digitalWrite(7,B[i]);
     val = digitalRead(5);
     output[i]=val;
      // Serial.write(output[i]);
  }



//Check AND GATE////////////////////////////////////////////////////////////////////////////////
    while(output[0]==andOut[0])
    {
      while(output[1]==andOut[1])
      {
        while(output[2]==andOut[2])
        {
          while(output[3]==andOut[3])
          {
           
           Serial.println(1,HEX);
          //  Serial.write("AND GATE");
            while(1)
            {
              delay(100);
            }
          }
         break;
        }
        break;
      }
        break;
    }

//Check NAND GATE////////////////////////////////////////////////////////////////////////////////
    while(output[0]==nandOut[0])
    {
      while(output[1]==nandOut[1])
      {
        while(output[2]==nandOut[2])
        {
          while(output[3]==nandOut[3])
          {
            Serial.println(2,HEX);
            //Serial.write("NAND GATE");
            while(1)
            {
              delay(100);
            }
          }
         break;
        }
        break;
      }
        break;
    }



//Check OR GATE////////////////////////////////////////////////////////////////////////////////
    while(output[0]==orOut[0])
    {
      while(output[1]==orOut[1])
      {
        while(output[2]==orOut[2])
        {
          while(output[3]==orOut[3])
          {
            Serial.println(3,HEX);
            //Serial.write("OR GATE");
            while(1)
            {
              delay(100);
            }
          }
         break;
        }
        break;
      }
        break;
    }








//Check XOR GATE////////////////////////////////////////////////////////////////////////////////
    while(output[0]==xorOut[0])
    {
      while(output[1]==xorOut[1])
      {
        while(output[2]==xorOut[2])
        {
          while(output[3]==xorOut[3])
          {
            Serial.println(5,HEX);
            //Serial.write("xOR GATE");
            while(1)
            {
              delay(100);
            }
          }
         break;
        }
        break;
      }
        break;
    }



//Check XNOR GATE////////////////////////////////////////////////////////////////////////////////
    while(output[0]==xnorOut[0])
    {
      while(output[1]==xnorOut[1])
      {
        while(output[2]==xnorOut[2])
        {
          while(output[3]==xnorOut[3])
          {
            Serial.println(6,HEX);
            //Serial.write("XNOR GATE");
            while(1)
            {
              delay(100);
            }
          }
         break;
        }
        break;
      }
        break;
    }




    //Check NOR GATE////////////////////////////////////////////////////////////////////////////////
    for(int i=0;i<4;i++)
  {
     digitalWrite(2,A[i]);
     digitalWrite(3,B[i]);
     val = digitalRead(4);
     output[i]=val;
      // Serial.write(output[i]);
  }

    
    while(output[0]==norOut[0])
    {
      while(output[1]==norOut[1])
      {
        while(output[2]==norOut[2])
        {
          while(output[3]==norOut[3])
          {
            Serial.println(4,HEX);
            //Serial.write("NOR GATE");
            while(1)
            {
              delay(100);
            }
          }
         break;
        }
        break;
      }
        break;
    }



//FOR NOT GATE 7404     

              digitalWrite(A0, 1);
              digitalWrite(A2, 1);
            //  digitalWrite(A4, 1);
              delay(1000);
                    if((digitalRead(A1)==0) && (digitalRead(A3)==0))
                        {
                            digitalWrite(A0, 0);
                            digitalWrite(A2, 0);
                          //  digitalWrite(A4, 0);
                            delay(1000);
                              if((digitalRead(A1)==1) && (digitalRead(A3)==1) )
                                  {
                                        Serial.println(7,HEX);
                                       //Serial.write("NOT GATE");
                                         while(1)
                                           {
                                              delay(100);
                                           }
                                  }
                                   else{Serial.write("2. NOT GATE IS NOT VERYFYING");}
                        }
                      else{Serial.write("1. NOT GATE IS NOT VERYFYING");}
                       

        
  
  Serial.write("IC NOT FOUND");
    while(1)
            {
              delay(100);
            }
            
}
