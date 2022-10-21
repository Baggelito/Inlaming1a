/*******************************************************************************
* 2.2.c: Rättning av felkod. I programmet skall Kalle Anks namn, ålder och
*        sysselsättning (serietidningsfigur) skrivas ut i terminalen.
*        Programmet kompilerar dock inte på grund av ett antal fel, som
*        därmed måste korrigeras.
*******************************************************************************/
#include <stdio.h>


/*******************************************************************************
* person_print: Skriver ut personuppgifter i form av namn, ålder samt arbete.
*******************************************************************************/
static void person_print(const char* name, const int age, const char* occupation)  // ändrade size_t till int och tog bort pekare för age
{
	//Tog bort difference opperatorerna för name och occupation
	// ändrade till %d istället för %zu
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