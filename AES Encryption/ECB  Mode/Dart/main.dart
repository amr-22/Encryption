import 'package:encrypt/encrypt.dart';

void main() {
  final plainText = 'V45,90,1.85,1.20';
  final key = Key.fromUtf8('ProjectRandomKey');

  final encrypter = Encrypter(AES(key, mode: AESMode.ecb, padding: null));

  final encrypted = encrypter.encrypt(plainText);
  final decrypted = encrypter.decrypt(encrypted);

  print(encrypted.base16);
  print(decrypted);
}



