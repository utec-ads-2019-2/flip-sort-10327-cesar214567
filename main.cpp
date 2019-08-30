#include <iostream>
#include <vector>

using namespace std;

int movimientos_flip(vector<int> vector_inicial){
    int contador=0;
    for (int i=1;i<vector_inicial.size();i++){
        int j=i;
        while(vector_inicial[j]<vector_inicial[j-1] && j>=1){
            int temporal=vector_inicial[j];
            vector_inicial[j]=vector_inicial[j-1];
            vector_inicial[j-1]=temporal;
            contador+=1;
            j--;    
            
        }
    }
    return contador;
}


int main(){
    int numero;
    while(cin>>numero && numero!=EOF){
        vector<int> vector_numeros;
        int temporal;
        for (int i=0;i<numero;i++){
            cin>>temporal;
            vector_numeros.push_back(temporal);
        }
        
        cout<<"Minimum exchange operations : "<<movimientos_flip(vector_numeros)<<endl;
    }


}