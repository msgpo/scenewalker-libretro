#ifndef TEXTURE_HPP__
#define TEXTURE_HPP__

#include "gl.hpp"

namespace GL
{
   class Texture
   {
      public:
         Texture(const std::string& path);
         Texture();
         ~Texture();

         void bind(unsigned unit = 0);
         static void unbind(unsigned unit = 0);

         static std1::shared_ptr<Texture> blank();
         void upload_data(const uint32_t* data, unsigned width, unsigned height,
               bool generate_mipmap);

      private:
         GLuint tex;
   };
}

#endif

