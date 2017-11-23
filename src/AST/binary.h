#ifndef ILANG_BINARY_H
#define ILANG_BINARY_H

#include "expression.h"

class Binary : public Expression {
    char opchar;
    ASTNode *lhs, *rhs;

public:
    Binary(char opchar, ASTNode *lhs, ASTNode *rhs);
};

#endif //ILANG_BINARY_H
