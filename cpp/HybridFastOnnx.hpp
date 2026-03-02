#pragma once
#include <vector>
#include "HybridFastOnnxSpec.hpp"

namespace margelo::nitro::fastonnx {
class HybridFastOnnx : public HybridFastOnnxSpec {
    public:
        HybridFastOnnx() : HybridObject(TAG), HybridFastOnnxSpec() {}
       
        double sum(double a, double b) override;
    };
} // namespace margelo::nitro::fastonnx
