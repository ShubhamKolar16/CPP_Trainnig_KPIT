#ifndef PRODUCT_H
#define PRODUCT_H
#include "ProductType.h"
#include <iostream>

class Product
{
private:
    std::string _productId;
    ProductType _productType;
    float _productPrice;
    std::string _productBrand;

public:
    Product(
        std::string productId,
        ProductType productType,
        float productPrice,
        std::string productBrand
        );

    ~Product() {
        std::cout << "Product with ID " << _productId << " is destroyed\n";
    }

    std::string productId() const { return _productId; }

    ProductType productType() const { return _productType; }

    float productPrice() const { return _productPrice; }

    std::string productBrand() const { return _productBrand; }

    friend std::ostream &operator<<(std::ostream &os, const Product &rhs);
    
};

std::string DisplayEnum(const ProductType pType);


#endif // PRODUCT_H
