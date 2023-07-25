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
 * SDPlayerGetInventoryResponse.h
 *
 * This is the data output json model
 */

#ifndef GG_STARDUST_CORESDK_MODEL_SDPlayerGetInventoryResponse_H_
#define GG_STARDUST_CORESDK_MODEL_SDPlayerGetInventoryResponse_H_


#include "StardustCoreSDK/ModelBase.h"

#include "StardustCoreSDK/Object.h"
#include "StardustCoreSDK/model/SDPlayerGetInventoryResponse_props.h"
#include <cpprest/details/basic_types.h>

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {

class SDPlayerGetInventoryResponse_props;

/// <summary>
/// This is the data output json model
/// </summary>
class  SDPlayerGetInventoryResponse
    : public ModelBase
{
public:
    SDPlayerGetInventoryResponse();
    virtual ~SDPlayerGetInventoryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SDPlayerGetInventoryResponse members

    /// <summary>
    /// Token ID
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

    /// <summary>
    /// Template ID
    /// </summary>
    int32_t getTemplateId() const;
    bool templateIdIsSet() const;
    void unsetTemplateId();

    void setTemplateId(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<SDPlayerGetInventoryResponse_props> getProps() const;
    bool propsIsSet() const;
    void unsetProps();

    void setProps(const std::shared_ptr<SDPlayerGetInventoryResponse_props>& value);

    /// <summary>
    /// Token ID, same as tokenId for backwards compatibility
    /// </summary>
    int32_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(int32_t value);

    /// <summary>
    /// Returned to marketplaces as token metadata
    /// </summary>
    std::shared_ptr<Object> getPublicMetadata() const;
    bool publicMetadataIsSet() const;
    void unsetPublicMetadata();

    void setPublicMetadata(const std::shared_ptr<Object>& value);

    /// <summary>
    /// Blockchain ID for the token
    /// </summary>
    utility::string_t getBlockchainTokenId() const;
    bool blockchainTokenIdIsSet() const;
    void unsetBlockchainTokenId();

    void setBlockchainTokenId(const utility::string_t& value);

    /// <summary>
    /// Link to view token on blockchain explorer (ex. polygonscan)
    /// </summary>
    utility::string_t getBlockchainExplorerLink() const;
    bool blockchainExplorerLinkIsSet() const;
    void unsetBlockchainExplorerLink();

    void setBlockchainExplorerLink(const utility::string_t& value);


protected:
    int32_t m_TokenId;
    bool m_TokenIdIsSet;
    utility::string_t m_Amount;
    bool m_AmountIsSet;
    int32_t m_TemplateId;
    bool m_TemplateIdIsSet;
    std::shared_ptr<SDPlayerGetInventoryResponse_props> m_Props;
    bool m_PropsIsSet;
    int32_t m_Id;
    bool m_IdIsSet;
    std::shared_ptr<Object> m_PublicMetadata;
    bool m_PublicMetadataIsSet;
    utility::string_t m_BlockchainTokenId;
    bool m_BlockchainTokenIdIsSet;
    utility::string_t m_BlockchainExplorerLink;
    bool m_BlockchainExplorerLinkIsSet;
};


}
}
}
}

#endif /* GG_STARDUST_CORESDK_MODEL_SDPlayerGetInventoryResponse_H_ */
