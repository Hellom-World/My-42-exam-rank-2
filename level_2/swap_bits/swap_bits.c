unsigned char swap_bits(unisgned char octet)
{
	return ((octet >> 4) | (octet << 4));
}
