#include "ctranslate2/ops/add.h"

namespace ctranslate2 {
  namespace ops {

    void Add::operator()(const StorageView& a, const StorageView& b, StorageView& c) const {
      DEVICE_DISPATCH(a.device(), TYPE_DISPATCH(a.dtype(), (compute<D, T>(a, b, c))));
    }

  }
}