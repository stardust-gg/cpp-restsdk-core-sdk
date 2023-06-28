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
 * SDPlayerCountResponse.h
 *
 * 
 */

#ifndef GG_STARDUST_CORESDK_MODEL_SDPlayerCountResponse_H_
#define GG_STARDUST_CORESDK_MODEL_SDPlayerCountResponse_H_


#include "StardustCoreSDK/ModelBase.h"


namespace gg {
namespace stardust {
namespace coresdk {
namespace model {


/// <summary>
/// 
/// </summary>
class  SDPlayerCountResponse
    : public ModelBase
{
public:
    SDPlayerCountResponse();
    virtual ~SDPlayerCountResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SDPlayerCountResponse members

    /// <summary>
    /// Game ID Number (unsigned 32 bit integer)
    /// </summary>
    int32_t getCount() const;
    bool countIsSet() const;
    void unsetCount();

    void setCount(int32_t value);


protected:
    int32_t m_Count;
    bool m_CountIsSet;
};


}
}
}
}

#endif /* GG_STARDUST_CORESDK_MODEL_SDPlayerCountResponse_H_ */