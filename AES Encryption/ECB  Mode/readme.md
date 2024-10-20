## AES encryption

" An Encryption between arduino and dart using ECB mode"
#### - AES128
#### - ECB Mode
#### - without padding
#### - Massage size 16 byte
#### - Key size 16 byte



_____
_____
_____



## Why using this specification

### - Crypto lib in Arduino not support CBC mode
- "CBC is included in the legacy list because cryptography experts no longer recommend it for use in newer designs"   --> documentation of Lib

### - Crypto lib in Arduino has a problem in decryption of CTR mode
- decryiption function recall encryption function so that not retrive correct answer
### - Documentaion of Crypto lib [source](https://rweather.github.io/arduinolibs/crypto.html)

### - modes that found in encrypt package dart
- CBC
- CFB-64
- CTR
- ECB
- OFB-64/GCTR
- OFB-64
- SIC
- GCM

### - Padding that found in encrypt package dart
- PKCS7

### - Crypto lib retrive Cypher without Padding
- can't change that so retrive in dart without padding

### - AES128 is a 128 bit Which is 16 byte
- So massage size is 16 byte ( 16 Char)
- same thing in key