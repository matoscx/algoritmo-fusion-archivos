#include <stdio.h>

int main() {
	FILE *f_ent1, *f_ent2, *f_salida;
	int reg1, reg2;
	int res1, res2; 
	
	
	f_ent1 = fopen("C:\\Users\\carol\\Desktop\\Carol100644268\\entrada1.txt", "rt");
	f_ent2 = fopen("C:\\Users\\carol\\Desktop\\Carol100644268\\entrada2.txt", "rt");
	f_salida = fopen("C:\\Users\\carol\\Desktop\\Carol100644268\\salida.txt", "wt");
	
	if (f_ent1 != NULL && f_ent2 != NULL && f_salida != NULL) {
		
		res1 = fscanf(f_ent1, "%d\n", &reg1);
		res2 = fscanf(f_ent2, "%d\n", &reg2);
		
		
		while (res1 == 1 && res2 == 1) {
			if (reg1 <= reg2) {
				fprintf(f_salida, "%d\n", reg1);
				res1 = fscanf(f_ent1, "%d\n", &reg1);
			} else {
				fprintf(f_salida, "%d\n", reg2);
				res2 = fscanf(f_ent2, "%d\n", &reg2);
			}
		}
		
		
		while (res1 == 1) {
			fprintf(f_salida, "%d\n", reg1);
			res1 = fscanf(f_ent1, "%d\n", &reg1);
		}
		
		
		while (res2 == 1) {
			fprintf(f_salida, "%d\n", reg2);
			res2 = fscanf(f_ent2, "%d\n", &reg2);
		}
		
		printf("\nMezcla realizada\n");
	} else {
		printf("\nError al abrir los archivos\n");
	}
	

	if (f_ent1 != NULL) fclose(f_ent1);
	if (f_ent2 != NULL) fclose(f_ent2);
	if (f_salida != NULL) fclose(f_salida);
	
	return 0;
}
