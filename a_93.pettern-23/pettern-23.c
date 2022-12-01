//         A
//       A B
//     A B C
//   A B C D
// A B C D E

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of N = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = n - 1; j >= i; j--){
            printf("  ");
        }
        for (int k = 1; k <= i; k++){
            printf("%c ", k + 64);
        }
        printf("\n");
    }
}

//                                                 A 
//                                               A B
//                                             A B C 
//                                           A B C D
//                                         A B C D E
//                                       A B C D E F
//                                     A B C D E F G 
//                                   A B C D E F G H
//                                 A B C D E F G H I
//                               A B C D E F G H I J
//                             A B C D E F G H I J K 
//                           A B C D E F G H I J K L
//                         A B C D E F G H I J K L M
//                       A B C D E F G H I J K L M N
//                     A B C D E F G H I J K L M N O 
//                   A B C D E F G H I J K L M N O P
//                 A B C D E F G H I J K L M N O P Q
//               A B C D E F G H I J K L M N O P Q R
//             A B C D E F G H I J K L M N O P Q R S 
//           A B C D E F G H I J K L M N O P Q R S T
//         A B C D E F G H I J K L M N O P Q R S T U
//       A B C D E F G H I J K L M N O P Q R S T U V
//     A B C D E F G H I J K L M N O P Q R S T U V W
//   A B C D E F G H I J K L M N O P Q R S T U V W X 
// A B C D E F G H I J K L M N O P Q R S T U V W X Y