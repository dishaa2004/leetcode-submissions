class ParkingSystem {
public:
    int big=0,medium=0,small=0;
    ParkingSystem(int B, int M, int S) {
        big += B;
        medium += M;
        small += S;
    }
    
    bool addCar(int carType) {
        if(carType == 1 && big>0)
        {
            big--;
            return true;
        }
        if(carType == 2 && medium>0)
        {
            medium--;
            return true;
        }
     if(carType == 3 && small>0)
        {
            small--;
            return true;
        }
       return false; 
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */