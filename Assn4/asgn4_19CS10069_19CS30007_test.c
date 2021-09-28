// lets test some keywords first
// typedef not working, even struct does not work
// union not working
int x = 0;

enum Week { Monday ,Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

extern int check;

inline int add(int x, int y) {
    return x + y;
}

int main() {

    // Lets test some data types first
    int n;
    int y = 4 + 3*3 + 12 / 4;
    float f;
    f = 3.4e-12;
    char c;
    c = 'X';
    c = '-';     
    
    // testing a switch statement 
    const int k = 2;
    switch (k) {
        case 1: printf("1\n");
        case 2: printf("2\n");
        case 3: printf("3\n");
        case 4:                                      
        case 5: printf("45\n");
                break;              
        default : printf("6\n");
    }

    // lets count the odd nos in an array
    int arr[] = {1, 0, 123, 100000007};
    int ctr = 0;
    for(auto i = 0; i < 4; i++) {
        if(arr[i]%2 == 0) {
            continue;
        } else {
            ctr++;
        }
    }
    
    printf("%d\n", sizeof(arr));   
    // lets compute the sum of the real nos
    float arrf[] = {0.1212, -1.3e-13, 1.2E24, 1E10, 20};
    float ans = 0.0;
    for(int i = 0; i < 5; i++) {
        ans += arrf[i];
    }

    /*
     * Here we will be exploring some strings
     * We'll do these things:
     * 1. We'll convert a string to upper case.
     * 2. Then we'll convert it back to lower case.
     */
    
    static char str[] = "Oh dear! When will this online sem end?!";
    // Lets convert the string tp upper case
    for(register int i = 0; str[i] != '\0'; i++) {
        if(str[i] <= 'z' && str[i] >= 'a')
            str[i] -= 32;
    }

    // Lets go back to lower case using a while loop now
    register int i = 0;
    while(1) {
        if(str[i] == '\0') {
            break;
        } else if(str[i] <= 'Z' && str[i] >= 'A')
            str[i] += 32;
        i++;
    }
    
    goto newLabel;

    char nullChar = '\0';
    
    // lets create some instances of students
    newLabel:
    // stud student1, student2;

    student1.name = "Tom";
    student1.rollNo = 1;
    student1.gpa = 9.4;

    student2.name = "Hanna";
    student2.rollNo = 2;
    student2.gpa = 9.5;
    
	return 0;	
}
