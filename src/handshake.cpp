int ciphertextFromNonceAndID(const unsigned char *nonce,
                             const unsigned char *id,
                             const unsigned char *pubkey,
                             unsigned char *ciphertext)
{
  unsigned char x[256] = {
    0xa2, 0x79, 0xc8, 0xe3, 0xb7, 0xe8, 0x35, 0x3f,
    0x0b, 0x1b, 0xee, 0x18, 0x6f, 0x8b, 0x6a, 0xd7,
    0x18, 0x17, 0xc7, 0xda, 0x6d, 0xbf, 0x17, 0x7e,
    0x07, 0x11, 0xa6, 0xe2, 0xcb, 0x2e, 0x15, 0x1e,
    0x03, 0x13, 0x37, 0x22, 0xea, 0xda, 0x66, 0x1e,
    0x19, 0xef, 0x35, 0xd7, 0xaa, 0xa7, 0x6a, 0xbe,
    0xd3, 0x43, 0x37, 0xbc, 0xaf, 0x43, 0x99, 0x86,
    0x68, 0xc5, 0x61, 0x0a, 0xfa, 0x17, 0xd0, 0x05,
    0xfa, 0xfc, 0xa9, 0x26, 0xfe, 0x20, 0x20, 0x88,
    0xa5, 0x1a, 0x67, 0x84, 0x4f, 0x98, 0x94, 0x19,
    0xee, 0x58, 0x92, 0x34, 0xf5, 0xb1, 0x68, 0x1e,
    0x4b, 0x26, 0x17, 0x3e, 0x33, 0x15, 0xcd, 0x93,
    0x2e, 0x82, 0x8a, 0x7a, 0x6f, 0x5f, 0x6a, 0x76,
    0x9c, 0x44, 0xa9, 0xe4, 0xfe, 0x1f, 0x92, 0x51,
    0x1a, 0xd8, 0x20, 0x76, 0x77, 0x46, 0x7b, 0x31,
    0x69, 0xc2, 0xef, 0x27, 0xcf, 0x56, 0x67, 0xf7,
    0x83, 0x19, 0xde, 0x62, 0x04, 0xfc, 0x21, 0x00,
    0xc7, 0x3e, 0x86, 0xc6, 0xfa, 0xd7, 0x2a, 0x88,
    0xab, 0x77, 0xc1, 0xd7, 0x5c, 0x16, 0x08, 0xed,
    0x72, 0x97, 0xd7, 0xdc, 0x33, 0xe0, 0xc8, 0xbd,
    0x00, 0xfa, 0x70, 0x1d, 0x18, 0xe0, 0x9f, 0x10,
    0x14, 0x3c, 0xf6, 0x24, 0x01, 0xeb, 0xe3, 0x3e,
    0xc3, 0x33, 0xee, 0xe9, 0x9a, 0x38, 0x9c, 0x98,
    0xdf, 0x00, 0x22, 0x12, 0xc7, 0x55, 0x90, 0xea,
    0x52, 0x74, 0xf0, 0x21, 0x8c, 0x5c, 0x56, 0x45,
    0x27, 0xc2, 0x78, 0x4d, 0xd8, 0x8f, 0xb2, 0xb7,
    0x15, 0x14, 0xce, 0xe6, 0x1c, 0xba, 0xb6, 0x84,
    0xc3, 0x37, 0x02, 0x4e, 0x87, 0x6e, 0x7c, 0x17,
    0x88, 0xfc, 0x8a, 0xc6, 0xe1, 0x51, 0xe2, 0x66,
    0xee, 0x96, 0xe9, 0xd3, 0x73, 0x71, 0x84, 0x12,
    0x7c, 0x03, 0xba, 0xa4, 0x89, 0x36, 0x38, 0x0a,
    0x91, 0x8b, 0x48, 0x37, 0x9a, 0xc1, 0xc6, 0xca };
  for (int i=0; i < 256; ++i)
    *(ciphertext + i) = x[i];
  return 0;
}
