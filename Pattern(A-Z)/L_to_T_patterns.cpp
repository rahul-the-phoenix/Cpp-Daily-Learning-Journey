//========================LLLLLLLLLLLLLLLLLLLLLLL=============================
for( int i=1;i<n ;i++){
    cout << "*";
    cout<<endl;
    }
for(int i=1;i<=n;i++){
    cout<<"* ";
}

//===============================MMMMMMMMMMMMMMMMMMMMMMMM=========================

for(int i=1;i<=n/2+1;i++){
    for(int j=1;j<=n;j++){
        if(j==1 || j==i || j==(n-i+1) || j==n) cout<<"*";
        else cout <<" ";
    }
    cout << endl;
}
for(int i= n/2+2;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j==1 || j==n) cout <<"*";
        else cout <<" ";
    }
    cout << endl;
}


//==============================NNNNNNNNNNNNNNNNNNNNNN===========================
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j==1 || j==n || j==i) cout<<"*";
        else cout <<" ";
    }
    cout << endl;
}

//===========================OOOOOOOOOOOOOOOOOOOOOOOOOOOOO=======================
for( int i=1;i<=n;i++){
    if(i==1 || i==n){
        for(int j=1;j<=n;j++) cout <<"*";
    }else{
        for(int j=1;j<=n;j++){
            if( j==1 || j== n) cout << "*";
            else cout <<" ";
        }
    }
    cout << endl;
}

//===================PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP==============================
for( int i=1;i<=n/2;i++){
    if(i==1 || i==n/2){
        for(int j=1;j<=n;j++)if (j%2==1)cout <<"*"; else cout <<" ";
    }else{
        for(int j=1;j<=n;j++){
            if( j==1 || j==n) cout << "*";
            else cout <<" ";
        }
    }
    cout << endl;
}
for(int i= n/2+1 ;i<=n;i++){
    cout <<"*" << endl;
}

//=======================RRRRRRRRRRRRRRRRRRRRRRRRRRR==============================
int  count =1;

for( int i=1;i<=n/2+1;i++){
    if(i==1 || i==n/2+1){
        for(int j=1;j<=n;j++)if (j%2==1)cout <<"*"; else cout <<" ";
    }else{
        for(int j=1;j<=n;j++){
            if( j==1 || j==n) cout << "*";
            else cout <<" ";
        }
    }
    cout << endl;
}
for(int i= n/2+2 ;i<=n;i++){
    for( int j=1;j<=n;j++){
        if(j==1 || j==2*count+1) cout <<"*"; else cout <<" ";
    }
    count+=1;
    cout << endl;
}

//============================SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS==========================
int s=log2(n);


for(int i=1;i<=n;i++){
    if(i==1 || i==n || i==n/2+1){
        for(int j=1;j<=n;j++) if (j%2==1)cout <<"*"; else cout <<" ";
    }else if(i<=n/2 && i>=n/2-s) cout <<"*" ;
    else if( i>=n/2 && i<=n/2+s){
        for(int j=1;j<=n;j++){
            if(j==n) cout <<"*"; else cout <<" "; }
    }
    else{
        for( int j=1;j<=n;j++){
            if(j==1 || j==n) cout <<"*"; else cout <<" ";
        }
    }
    cout << endl;
}
