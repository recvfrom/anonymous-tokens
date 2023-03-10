// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "anonymous_tokens/cpp/crypto/utils.h"

#include <string>

#include "absl/strings/str_cat.h"


namespace anonymous_tokens {

std::string MaskMessageConcat(absl::string_view mask,
                              absl::string_view message) {
  return absl::StrCat(mask, message);
}

}  // namespace anonymous_tokens

