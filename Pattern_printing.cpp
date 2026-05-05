RULES:- for the outer loop count the number of lines 
the nested loop is actually prints the stars or numbers 
break down the problem for complex patterns 




// easy 1 : 
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
for(i=1;i<=n;i++){ 
    for(j=1;j<=i;j++){
        cout <<i <<" ";
    }
    cout <<"\n";
}


// easy 2 
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
// for(i=0;i<=n-1;i++){
    for(j=1;j<=n-i;j++){
        cout <<j <<" ";
    }
    cout <<"\n";
}

// case 3: 
// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 
// 5 6 7 8 9 
for(i=1;i<=n;i++){
    for(j=0;j<=i-1;j++){
        cout <<j+i <<" ";
    }
    cout <<"\n";
}

// case 4
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 
for(i=1;i<=n;i++){
    for(j=0;j<=i-1;j++){
    (i+j)%2==0 ? cout <<"0" <<" " : cout <<"1" <<" ";      // the logic of odd & even 
    }
    cout <<"\n";
}

// case 5
// 5 5 5 5 5 
// 4 4 4 4 
// 3 3 3 
// 2 2 
// 1
for(i=n;i>=1;i--){
    for(j=1;j<=i;j++){
  cout << i << " ";
    }
    cout <<"\n";
}

// case 6
// 5 4 3 2 1 
// 4 3 2 1 
// 3 2 1 
// 2 1 
// 1 
for(i=n;i>=1;i--){
    for(j=i;j>=1;j--){
  cout << j << " ";
    }
    cout <<"\n";
}


// medium 1 
//     *
//    ***
//   *****
//  *******
// *********

for(int i=0;i<n;i++){
     for(int j=0;j<n-i-1;j++){
         cout << " ";
     }
     for( int j = 0;j<2*i+1;j++){
         cout <<"*";
     }
     cout << "\n";
 }

// medium 2:
// *********
//  *******
//   *****
//    ***
//     *
 for(int i=0;i<n;i++){
     for(int j=0;j<i;j++){
         cout << " ";
     }
     for( int j = 0;j<2*(n-i)-1;j++){
         cout <<"*";
     }
     cout << "\n";
 }






