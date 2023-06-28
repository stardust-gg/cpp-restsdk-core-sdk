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
 * SDTemplateCreateBulk.h
 *
 * 
 */

#ifndef GG_STARDUST_CORESDK_MODEL_SDTemplateCreateBulk_H_
#define GG_STARDUST_CORESDK_MODEL_SDTemplateCreateBulk_H_


#include "StardustCoreSDK/ModelBase.h"

#include "StardustCoreSDK/Object.h"
#include <cpprest/details/basic_types.h>
#include "StardustCoreSDK/model/SDTemplateCreateBulk_props.h"

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {

class SDTemplateCreateBulk_props;

/// <summary>
/// 
/// </summary>
class  SDTemplateCreateBulk
    : public ModelBase
{
public:
    SDTemplateCreateBulk();
    virtual ~SDTemplateCreateBulk();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SDTemplateCreateBulk members

    /// <summary>
    /// The name of the template (ex. Bronze Axe)
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// u96 Number as String (ex. 200000000), default 39614081257132168796771975168 
    /// </summary>
    utility::string_t getCap() const;
    bool capIsSet() const;
    void unsetCap();

    void setCap(const utility::string_t& value);

    /// <summary>
    /// The type of custom contract to use for this template. Default will use a shared contract.
    /// </summary>
    utility::string_t getContractType() const;
    bool contractTypeIsSet() const;
    void unsetContractType();

    void setContractType(const utility::string_t& value);

    /// <summary>
    /// FT is a currency where every instance is the same, NFT is where every token instance differes (ex. FT)
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(const utility::string_t& value);

    /// <summary>
    /// image url
    /// </summary>
    utility::string_t getImage() const;
    bool imageIsSet() const;
    void unsetImage();

    void setImage(const utility::string_t& value);

    /// <summary>
    /// Description of template
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();

    void setDescription(const utility::string_t& value);

    /// <summary>
    /// Set if the Template is active or not
    /// </summary>
    bool isActiveListing() const;
    bool activeListingIsSet() const;
    void unsetActiveListing();

    void setActiveListing(bool value);

    /// <summary>
    /// Blockchain address to set as owner of the custom contract, if contractType is passed in.
    /// </summary>
    utility::string_t getOwnerAddress() const;
    bool ownerAddressIsSet() const;
    void unsetOwnerAddress();

    void setOwnerAddress(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<SDTemplateCreateBulk_props> getProps() const;
    bool propsIsSet() const;
    void unsetProps();

    void setProps(const std::shared_ptr<SDTemplateCreateBulk_props>& value);

    /// <summary>
    /// Returned to marketplaces as contract metadata
    /// </summary>
    std::shared_ptr<Object> getPublicContractMetadata() const;
    bool publicContractMetadataIsSet() const;
    void unsetPublicContractMetadata();

    void setPublicContractMetadata(const std::shared_ptr<Object>& value);

    /// <summary>
    /// Inherited by tokens, and returned to marketplaces as token metadata
    /// </summary>
    std::shared_ptr<Object> getPublicTokenMetadata() const;
    bool publicTokenMetadataIsSet() const;
    void unsetPublicTokenMetadata();

    void setPublicTokenMetadata(const std::shared_ptr<Object>& value);


protected:
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Cap;
    bool m_CapIsSet;
    utility::string_t m_ContractType;
    bool m_ContractTypeIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
    utility::string_t m_Image;
    bool m_ImageIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    bool m_ActiveListing;
    bool m_ActiveListingIsSet;
    utility::string_t m_OwnerAddress;
    bool m_OwnerAddressIsSet;
    std::shared_ptr<SDTemplateCreateBulk_props> m_Props;
    bool m_PropsIsSet;
    std::shared_ptr<Object> m_PublicContractMetadata;
    bool m_PublicContractMetadataIsSet;
    std::shared_ptr<Object> m_PublicTokenMetadata;
    bool m_PublicTokenMetadataIsSet;
};


}
}
}
}

#endif /* GG_STARDUST_CORESDK_MODEL_SDTemplateCreateBulk_H_ */
