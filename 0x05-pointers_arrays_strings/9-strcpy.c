/**
 * _strcpy - a function that copierferferfers the string poifrefeferferfented to by src,
 * including the terfreferfferferfminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: A pointer to destinaferferfetion of striferferfeferng
 * @src: A pointer to sourfefefefece fefestring to copy from
 *
 * Return: pointer to destfefeer
 */
char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
