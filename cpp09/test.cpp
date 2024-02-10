// #include <iostream>
// #include <map>
// #include <string>

// int main()
// {
//     try
//     {
//         std::map<std::string, std::string> m;
//         m["0"] = "Two";
//         m.insert(std::pair<std::string, std::string>("30", "Three"));
//         m.insert(std::make_pair("100", "One"));
//         m.insert(std::map<std::string, std::string>::value_type("41", "Four"));

//         std::map<std::string, std::string>::iterator it = m.begin();
//         for (; it != m.end(); it++)
//             std::cout << it->first << std::endl;
//     }
//     catch (std::exception& e)
//     {
//         std::cerr << e.what() << std::endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <sstream>

// int main() {
//     std::string str = "3.14";
//     float myFloat;

//     std::istringstream iss(str);

//     if (!(iss >> myFloat))
//     {
//         if (iss.eof()) {
//             std::cerr << "Error: End of file reached unexpectedly." << std::endl;
//         } else if (iss.fail()) {
//             std::cerr << "Error: Failed to extract a valid float." << std::endl;
//         } else if (iss.bad()) {
//             std::cerr << "Error: Unrecoverable stream error occurred." << std::endl;
//         } else {
//             // This branch is unlikely to be reached, but it's a catch-all
//             std::cerr << "Error: Unknown error during conversion." << std::endl;
//         }

//         return 1;
//     }

//     // Display the result
//     std::cout << "Converted float: " << myFloat << std::endl;

//     return 0;
// }


// #include <iostream>
// #include <map>

// int main()
// {
//     std::pair<std::string, float> ttt;
//     if (ttt.first.empty())
//         return 1;
//     std::cout << ttt.first << "\t" << ttt.second << std::endl;
//     return 0;
// }


#include <iostream>
#include <sstream>
#include <string>

int main()
{
    std::string str = "+00+26";
    std::istringstream iss(str);
    unsigned int number;

    if (!(iss >> number))
        std::cout << "Conversion failed." << std::endl;
    else
        std::cout << "The extracted integer : " << number << std::endl;

    return 0;
}
