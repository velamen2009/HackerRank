// Define specializations for the Traits class template here.
template <>
struct Traits<Color> {
    string static name(int color) {
        if (color == 0) {
            return "red";
        } else if (color == 1) {
            return "green";
        } else if (color == 2) {
            return "orange";
        }

        return "unknown";
    }
};
template <>
struct Traits<Fruit> {
    string static name(int type) {
        switch(type)
            {
            case 0:
                return "apple";
            case 1:
                return "orange";
            case 2:
                return "pear";
            default:
                return "unknown";
        }
            
    }
};