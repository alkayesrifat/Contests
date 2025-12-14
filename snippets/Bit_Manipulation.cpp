1 . Check number is odd or even using bitwise operation :

    if( number & 1 ){
        cout <<"ODD" << endl;
    }
    else{
        cout <<"EVEN" << endl;
    }


2 . Check if  a number is a power of 2

    if( number == 0 ){  //  Edge case

        cout<<"Not a Power of Two" << endl;

    }
    else if( (number & ( number - 1 )) == 0){

        cout <<"Power Of Two" << endl;
        
    }
    else{
        cout<<"Not a Power of Two" << endl;
    }


3 . Bit Manipulation: Checking, Printing, and Modifying K-th Bit

    3.1 -> Checks whether the k-th bit of n is ON (1) or OFF (0)
    bool check_kth_bit_on_or_off(int n, int k) {
        return ((n >> k) & 1);
    }

    3.2 -> Turns ON the k-th bit of n
    int turn_on_kth_bit(int n, int k) {
        return (n | (1 << k));
    }

    3.3 -> Turns OFF the k-th bit of n
    int turn_off_kth_bit(int n, int k) {
        return (n & (~(1 << k)));
    }

    3.4 -> Toggles (flips) the k-th bit of n
    int toggle_kth_bit(int n, int k) {
        return (n ^ (1 << k));
    }


4 . 