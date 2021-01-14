#ifndef UNTITLED5_FUNCTION_H
#define UNTITLED5_FUNCTION_H

char* str = new char[500];
const char* angl = "ABVGDEIoGZIIKLMNOPRSTYFHCChShShEUYaabvgdeiogziiklmnoprstyfhcchshshyieuyai'";// массив англ букв
const char* rus = "АБВГДЕЁ/ЖЗИЙКЛМНОПРСТУФХЦЧ/Ш/Щ/ЭЮЯ/бвгдеё/жзийклмнопрстуфхцч/ш/щ/ы/эюя/ьъ.";// массив русских букв

void translate(const char *str, const char *angl, const char *rus);// используем указатель

#endif
