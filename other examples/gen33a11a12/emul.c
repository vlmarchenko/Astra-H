void my_null()
{
	SendCANmessage(0x115,1,0x02);
	delay(15);
	SendCANmessage(0x145,8,0x00,0x01,0x18,0x91,0x00,0x04,0x00,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x11A,7,0xC0,0x00,0x40,0x80,0x01,0x00,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x500,2,0x00,0x5F);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x440,8,0x48,0x00,0xA4,0x00,0x00,0xE8,0x90,0x11);
	delay(15);
	SendCANmessage(0x445,2,0x00,0x60);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x230,7,0x05,0x00,0x00,0x00,0x00,0x09,0x00);
	delay(15);
	SendCANmessage(0x370,8,0x02,0x01,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x425,1,0x02);
	delay(15);
	SendCANmessage(0x360,3,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x305,7,0x00,0x00,0xC0,0x00,0x10,0x80,0x00);
	delay(15);
	SendCANmessage(0x350,4,0x86,0x01,0x9B,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x235,2,0x00,0xBA);
	delay(15);
	SendCANmessage(0x400,5,0x21,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x626,8,0x00,0x11,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x340,2,0x00,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x170,4,0x72,0x04,0xFA,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);

	while(1)
	{
	SendCANmessage(0x115,1,0x02);
	delay(15);
	SendCANmessage(0x145,8,0x00,0x01,0x18,0x91,0x00,0x04,0x00,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x250,8,0x06,0xAE,0x02,0x03,0x01,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x650,8,0x02,0xEE,0x02,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x440,8,0x48,0x00,0xC0,0x00,0x00,0xE8,0x90,0x11);
	delay(15);
	SendCANmessage(0x445,2,0x00,0x60);
	delay(15);
	SendCANmessage(0x250,8,0x06,0xAE,0x02,0x03,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x11A,7,0xC0,0x00,0x40,0x80,0x01,0x00,0x00);
	delay(15);
	SendCANmessage(0x650,8,0x02,0xEE,0x02,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x250,8,0x06,0xAE,0x02,0x03,0x01,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x650,8,0x02,0xEE,0x02,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x250,8,0x06,0xAE,0x02,0x03,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x255,8,0x04,0xAE,0x01,0x04,0x04,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x650,8,0x02,0xEE,0x02,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x400,5,0x21,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x655,8,0x02,0xEE,0x01,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x635,8,0x00,0x08,0x40,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x500,2,0x00,0x5F);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x250,8,0x06,0xAE,0x02,0x03,0x02,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x650,8,0x02,0xEE,0x02,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x230,7,0x05,0x00,0x00,0x00,0x00,0x09,0x00);
	delay(15);
	SendCANmessage(0x370,8,0x02,0x01,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x425,1,0x02);
	delay(15);
	SendCANmessage(0x360,3,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x250,8,0x06,0xAE,0x02,0x03,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x650,8,0x02,0xEE,0x02,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x305,7,0x00,0x00,0xC0,0x00,0x10,0x80,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x235,2,0x00,0xBA);
	delay(15);
	SendCANmessage(0x350,4,0x86,0x01,0x9B,0x00);
	delay(15);
	SendCANmessage(0x250,8,0x06,0xAE,0x02,0x03,0x02,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x650,8,0x02,0xEE,0x02,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x250,8,0x06,0xAE,0x02,0x03,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x255,8,0x04,0xAE,0x01,0x04,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x650,8,0x02,0xEE,0x02,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x655,8,0x02,0xEE,0x01,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x340,2,0x00,0x00);
	delay(15);
	SendCANmessage(0x440,8,0x48,0x00,0xC4,0x00,0x00,0xE8,0x90,0x11);
	delay(15);
	SendCANmessage(0x445,2,0x00,0x60);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x170,4,0x72,0x04,0xFA,0x00);
	delay(15);
	SendCANmessage(0x250,8,0x06,0xAE,0x02,0x03,0x01,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x650,8,0x02,0xEE,0x02,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x250,8,0x06,0xAE,0x02,0x03,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x650,8,0x02,0xEE,0x02,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	SendCANmessage(0x625,8,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00);
	delay(15);
	}
}