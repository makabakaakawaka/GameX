#include "GameX/renderer/scene.h"

#include "GameX/application/application.h"
#include "GameX/renderer/renderer.h"

namespace GameX::Base {
Scene::Scene(class Renderer *renderer, const SceneSettings &settings) {
  renderer_ = renderer;
  grassland::vulkan::DescriptorPoolSettings descriptor_pool_settings;

  descriptor_pool_ = std::make_unique<grassland::vulkan::DescriptorPool>(
      renderer_->App()->VkCore(), descriptor_pool_settings);
}

}  // namespace GameX::Base
