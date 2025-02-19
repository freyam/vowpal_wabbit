#pragma once
// Copyright (c) by respective owners including Yahoo!, Microsoft, and
// individual contributors. All rights reserved. Released under a BSD (revised)
// license as described in the file LICENSE.

#include "vw/core/vw_fwd.h"

#include <memory>

namespace VW
{
namespace reductions
{
std::shared_ptr<VW::LEARNER::learner> metrics_setup(VW::setup_base_i& stack_builder);
void output_metrics(VW::workspace& all);
void additional_metrics(VW::workspace& all, VW::metric_sink& sink);
}  // namespace reductions
}  // namespace VW
