#include <iostream>

const int WIDGET_PER_DAY = 160;
class WidgetFactory{
public:
    WidgetFactory(int n = 160) : numWidgets(n) {}

    void setTotalDays(double d) {
        totalDays = d;
    }

    int getWidgets() const {
        return numWidgets;
    }

    void calculateTotalDays(){
        double days = getWidgets() / static_cast<double>(WIDGET_PER_DAY);
        setTotalDays(days);
    }
    friend std::ostream & operator << (std::ostream &os, const WidgetFactory &w){
        os << "There are " << w.numWidgets << " widgets needed to be produced.\n";
        os << "It will take  " << w.totalDays << " days to complete.\n";
        return os;
    }
private:
    int numWidgets;
    double totalDays; 
};

int main() {

    WidgetFactory w1 {140};
    w1.calculateTotalDays();
    std::cout << w1 << std::endl;

    std::cout << std::endl;

    WidgetFactory w3 {11420};
    w3.calculateTotalDays();
    std::cout << w3 << std::endl;

    return 0;
}