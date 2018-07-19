#ifndef ONEFLOW_CORE_KERNEL_RCNN_UTIL_H_
#define ONEFLOW_CORE_KERNEL_RCNN_UTIL_H_

#include "oneflow/core/register/blob.h"

namespace oneflow {

template<typename T>
struct RcnnUtil {
  static void BboxOverlaps(DeviceCtx* ctx, const Blob* boxes, const Blob* gt_boxes, Blob* overlaps);
};

}  // namespace oneflow

#endif  // ONEFLOW_CORE_KERNEL_RCNN_UTIL_H_
