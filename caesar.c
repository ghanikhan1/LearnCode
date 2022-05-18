#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>

int main( int argc, string argv[] ){

    if(argc != 2){
        printf("key\n");
        return 1;
    }
    int key;
    char c;

  // check argv[1] is only a number
  if (sscanf(argv[1], "%d %c", &key, &c) != 1 || (key < 0) )
  {
    printf("key\n");
    return 1;
  }

    else{

        string s = get_string("Plain Text:  ");
        char ch;
        int n = strlen(s);
        printf("%d\n" , n);

        for(int i = 0; i < n ;i++){
            ch = s[i];

            if(ch >= 'a' && ch <= 'z'){

			    ch = ch + key;
			    if(ch > 'z'){
				    ch = ch - 'z' + 'a' - 1;
			    }

			    s[i] = ch;
		    }
		    else if(ch >= 'A' && ch <= 'Z'){
			    ch = ch + key;
			    if(ch > 'Z'){
				    ch = ch - 'Z' + 'A' - 1;
			    }
		        s[i] = ch;
		    }

            printf("%c" , s[i]);
        }
        printf("\n");
    return 0;
    }

}