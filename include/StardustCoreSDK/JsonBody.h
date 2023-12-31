/**
 * Stardust API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 2023-07-25T00:59:12Z
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.5.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * JsonBody.h
 *
 * This is a JSON http body which can be submitted via http
 */

#ifndef GG_STARDUST_CORESDK_MODEL_JsonBody_H_
#define GG_STARDUST_CORESDK_MODEL_JsonBody_H_


#include "StardustCoreSDK/IHttpBody.h"

#include <cpprest/json.h>

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {

class  JsonBody
    : public IHttpBody
{
public:
    JsonBody( const web::json::value& value );
    virtual ~JsonBody();

    void writeTo( std::ostream& target ) override;

protected:
    web::json::value m_Json;
};

}
}
}
}

#endif /* GG_STARDUST_CORESDK_MODEL_JsonBody_H_ */
