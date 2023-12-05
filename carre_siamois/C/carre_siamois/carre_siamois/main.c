//
//  main.c
//  carre_siamois
//
//  Created by sidali zitouni terki on 05/12/2023.
//

#include <stdio.h>

#include "carre_siamois.h"

int main(int argc, const char * argv[]) {
    // insert code here...
   int ** carre;
    int n = 7;
    int k = 9;
    carre = carre_siamois_ne_pl(n, k);
    for (int i = 0; i< n; i++){
        for(int j =0; j < n; j++){
            printf("%d ",carre[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
