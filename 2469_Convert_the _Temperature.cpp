class Solution {
public:
    vector<double> convertTemperature(double celsius) 
    {
        double kel,far;
        kel= celsius + 273.15;
        far= (celsius * 1.80) + 32.00 ;
        return {kel,far};   
    }
};
