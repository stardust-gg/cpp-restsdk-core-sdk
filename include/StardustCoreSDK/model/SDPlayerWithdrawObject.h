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
 * SDPlayerWithdrawObject.h
 *
 * 
 */

#ifndef GG_STARDUST_CORESDK_MODEL_SDPlayerWithdrawObject_H_
#define GG_STARDUST_CORESDK_MODEL_SDPlayerWithdrawObject_H_


#include "StardustCoreSDK/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {


/// <summary>
/// 
/// </summary>
class  SDPlayerWithdrawObject
    : public ModelBase
{
public:
    SDPlayerWithdrawObject();
    virtual ~SDPlayerWithdrawObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SDPlayerWithdrawObject members

    /// <summary>
    /// 
    /// </summary>
    int32_t getTokenId() const;
    bool tokenIdIsSet() const;
    void unsetTokenId();

    void setTokenId(int32_t value);

    /// <summary>
    /// u64 Number as String, min: 0, max: 9223372036854775807
    /// </summary>
    utility::string_t getAmount() const;
    bool amountIsSet() const;
    void unsetAmount();

    void setAmount(const utility::string_t& value);


protected:
    int32_t m_TokenId;
    bool m_TokenIdIsSet;
    utility::string_t m_Amount;
    bool m_AmountIsSet;
};


}
}
}
}

#endif /* GG_STARDUST_CORESDK_MODEL_SDPlayerWithdrawObject_H_ */
