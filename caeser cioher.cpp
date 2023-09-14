#include<stdio.h>
#include<ctype.h>
int main() 
{
char text[500],pt, ct;
int key;
printf("Enter a message to encrypt: ");
scanf("%s", text);
printf("Enter the key: ");
scanf("%d", & key);
for (int i=0; text[i]!= '\0';i++) 
{
ct = text[i];
       if (isalnum(ct)) 
	   {
	   if (islower(ct)) 
	   {
       ct = (ct - 'a' + key) % 26 + 'a';
        }
          if (isupper(ct))
		   {
        ct = (ct - 'A' + key) % 26 + 'A';
        } 
            if (isdigit(ct)) {
                ct = (ct - '0' + key) % 10 + '0';
            }
        }    
        else {
            printf("Invalid Message");
        }
        text[i] = ct;
    }
    printf("Encrypted message: %s", text);
    printf("Enter encrypt message: ");
scanf("%s", ct);
for (int i=0; ct[i]!= '\0';i++) 
{
pt = ct[i];
       if (isalnum(pt)) 
	   {
	   if (islower(pt)) 
	   {
       pt = (pt - 'a' - key) % 26 + 'a';
        }
          if (isupper(pt))
		   {
        pt = (pt - 'A' - key) % 26 + 'A';
        } 
            if (isdigit(pt)) {
                pt = (pt - '0' - key) % 10 + '0';
            }
        }    
        else {
            printf("Invalid Message");
        }
        ct[i] = pt;
    }
printf("decrypted message: %s", ct);
    return 0;
}
