#ifndef FORMULA2CNF_HPP
#define FORMULA2CNF_HPP

#include <vector>
#include <string>


/**
 * @class Formula2CNF
 * @brief A class to convert logical formulas to Conjunctive Normal Form (CNF).
 *
 * The Formula2CNF class provides functionality to convert logical formulas
 * represented as strings into their equivalent CNF representation.
 */
class Formula2CNF {
public:
    /**
    * @brief Constructs a new Formula2CNF object.
    */
    Formula2CNF();

    /**
	* @brief Converts a logical formula to its CNF representation.
	*
	* This function takes a logical formula represented as a string and converts
	* it into a CNF representation, which is a vector of vectors of integers.
	*
	* @param formula The logical formula as a string.
	* @return A vector of vectors of integers representing the CNF.
	*/
	std::vector<std::vector<int>> convert(const std::string& formula);

private:
};

#endif // FORMULA2CNF_HPP