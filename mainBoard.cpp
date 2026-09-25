#include "Board.hpp"

#include <vector>
#include <string>

int main(void) {
    std::vector<std::string> a {
        "        ",
        "        ",
        "        ",
        "        ",
        "        ",
        "        ",
        "        ",
        "        "
    };
    
    std::vector<std::string> b {
        "   *    ",
        "   *  * ",
        "   *  * ",
        "   *  * ",
        "   *    ",
        "      * ",
        "   ***  ",
        "   *    ",
    };
    std::vector<std::string> c {
        " *  *   ",
        "   *  * ",
        "*       ",
        "  *  *  ",
        "       *",
        "      * ",
        "   **   ",
        "   *    ",
    };
    
    
    Board chess1(a);
    Board chess2(b);
    Board chess3(c);

    chess1.findKingPath(0, 0);
    chess2.findKingPath(0, 0);
    chess3.findKingPath(0, 0);

    return 0;
}