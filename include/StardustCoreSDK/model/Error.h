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
 * Error.h
 *
 * 
 */

#ifndef GG_STARDUST_CORESDK_MODEL_Error_H_
#define GG_STARDUST_CORESDK_MODEL_Error_H_


#include "StardustCoreSDK/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {


/// <summary>
/// 
/// </summary>
class  Error
    : public ModelBase
{
public:
    Error();
    virtual ~Error();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Error members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMessage() const;
    bool messageIsSet() const;
    void unsetMessage();

    void setMessage(const utility::string_t& value);


protected:
    utility::string_t m_Message;
    bool m_MessageIsSet;
};


}
}
}
}

#endif /* GG_STARDUST_CORESDK_MODEL_Error_H_ */
