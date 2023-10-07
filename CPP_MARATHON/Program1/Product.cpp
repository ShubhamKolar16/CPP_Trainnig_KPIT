#include <iostream>
#include "Product.h"

Product::Product(std::string productId, ProductType productType, float productPrice, std::string productBrand)
: _productId(productId), _productType(productType), _productPrice(productPrice), _productBrand(productBrand)
{
}

std::ostream &operator<<(std::ostream &os, const Product &rhs) {
    os << "_productId: " << rhs._productId
       << " _productType: " << DisplayEnum(rhs._productType)
       << " _productPrice: " << rhs._productPrice
       << " _productBrand: " << rhs._productBrand;
    return os;
}

std::string DisplayEnum(const ProductType pType)
{
    if(pType == ProductType::APPLIANCE){
        return "APPLIANCE";
    }else if(pType == ProductType::PERFUME){
        return "PERFUME";
    }else{
        return "FMCG";
    }
}

