/*******************************************************************************
* 2.2.c: R�ttning av felkod. I programmet skall Kalle Anks namn, �lder och
*        syssels�ttning (serietidningsfigur) skrivas ut i terminalen.
*        Programmet kompilerar dock inte p� grund av ett antal fel, som
*        d�rmed m�ste korrigeras.
*******************************************************************************/
#include <stdio.h>


/*******************************************************************************
* person_print: Skriver ut personuppgifter i form av namn, �lder samt arbete.
*******************************************************************************/
static void person_print(const char* name, const int age, const char* occupation)  // �ndrade size_t till int och tog bort pekare f�r age
{
	//Tog bort difference opperatorerna f�r name och occupation
	// �ndrade till %d ist�llet f�r %zu
	printf("Name: %s\n", name);  
	printf("Age: %d\n", age);  
	printf("Occupation: %s\n", occupation); 
	return;
}
 
/*******************************************************************************
* main: Skriver ut angivna personuppgifter.
*******************************************************************************/
int main(void)
{
	person_print("Donald Duck", 88, "Cartoon character");
	return 0;
}	