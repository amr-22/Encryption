
#include <Crypto.h>
#include <AES.h>
#include <string.h>

//key[16] cotain 16 byte key(128 bit) for encryption
byte key[17]= "ProjectRandomKey";

//plaintext[16] contain the text we need to encrypt
byte plaintext[17]= "V45,90,1.50,1.20";

//cypher[16] stores the encrypted text
byte cypher[16];

//decryptedtext[16] stores decrypted text after decryption
byte decryptedtext[16];

AES128 aes;

void setup() {
  Serial.begin(9600);
  aes.setKey(key,16);// Setting Key for AES

  
  Serial.println();
  Serial.print("Before Encryption:");
  
  for(int i=0; i<sizeof(plaintext); i++){
    Serial.write(plaintext[i]);
   }


   

  aes.encryptBlock(cypher, plaintext);

    Serial.println();

    
      Serial.print("After Encryption:");
  for(int j=0;j<sizeof(cypher);j++){
      Serial.print(cypher[j], HEX);
    }
    Serial.println();



  aes.decryptBlock(decryptedtext, cypher);
   
  Serial.print("After Dencryption:");
  for(int i=0; i<sizeof(decryptedtext); i++){
    Serial.write(decryptedtext[i]);
   }

}

void loop() {
  // put your main code here, to run repeatedly:

}
