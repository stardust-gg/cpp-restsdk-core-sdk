/**
 * Stardust API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 2023-06-15T19:52:41Z
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.5.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * IHttpBody.h
 *
 * This is the interface for contents that can be sent to a remote HTTP server.
 */

#ifndef GG_STARDUST_CORESDK_MODEL_IHttpBody_H_
#define GG_STARDUST_CORESDK_MODEL_IHttpBody_H_


#include <iostream>

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {

class  IHttpBody
{
public:
    virtual ~IHttpBody() { }

    virtual void writeTo( std::ostream& stream ) = 0;
};

}
}
}
}

#endif /* GG_STARDUST_CORESDK_MODEL_IHttpBody_H_ */