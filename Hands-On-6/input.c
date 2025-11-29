int global_var;

void funcion1(int param1, float param2) {
    int local_var;
    const int constante = 10;
    local_var = param1 + constante;
    
    {
        int variable_anidada;
        variable_anidada = local_var;
    }
    
}

int main() {
    int x;
    float y;

    x = 10;
    y = x + 2;
    
    int x;
    
    const int MAX = 100;

    if (x > 0) {
        int temp;
        temp = x * 2;
    }
    
    return 0;
}
