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



#include "StardustCoreSDK/model/SDTemplateCreateBulk.h"

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {



SDTemplateCreateBulk::SDTemplateCreateBulk()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Cap = utility::conversions::to_string_t("");
    m_CapIsSet = false;
    m_ContractType = utility::conversions::to_string_t("");
    m_ContractTypeIsSet = false;
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_Image = utility::conversions::to_string_t("");
    m_ImageIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_ActiveListing = false;
    m_ActiveListingIsSet = false;
    m_OwnerAddress = utility::conversions::to_string_t("");
    m_OwnerAddressIsSet = false;
    m_PropsIsSet = false;
    m_PublicContractMetadataIsSet = false;
    m_PublicTokenMetadataIsSet = false;
}

SDTemplateCreateBulk::~SDTemplateCreateBulk()
{
}

void SDTemplateCreateBulk::validate()
{
    // TODO: implement validation
}

web::json::value SDTemplateCreateBulk::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_CapIsSet)
    {
        val[utility::conversions::to_string_t(U("cap"))] = ModelBase::toJson(m_Cap);
    }
    if(m_ContractTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("contractType"))] = ModelBase::toJson(m_ContractType);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t(U("type"))] = ModelBase::toJson(m_Type);
    }
    if(m_ImageIsSet)
    {
        val[utility::conversions::to_string_t(U("image"))] = ModelBase::toJson(m_Image);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t(U("description"))] = ModelBase::toJson(m_Description);
    }
    if(m_ActiveListingIsSet)
    {
        val[utility::conversions::to_string_t(U("activeListing"))] = ModelBase::toJson(m_ActiveListing);
    }
    if(m_OwnerAddressIsSet)
    {
        val[utility::conversions::to_string_t(U("ownerAddress"))] = ModelBase::toJson(m_OwnerAddress);
    }
    if(m_PropsIsSet)
    {
        val[utility::conversions::to_string_t(U("props"))] = ModelBase::toJson(m_Props);
    }
    if(m_PublicContractMetadataIsSet)
    {
        val[utility::conversions::to_string_t(U("publicContractMetadata"))] = ModelBase::toJson(m_PublicContractMetadata);
    }
    if(m_PublicTokenMetadataIsSet)
    {
        val[utility::conversions::to_string_t(U("publicTokenMetadata"))] = ModelBase::toJson(m_PublicTokenMetadata);
    }

    return val;
}

bool SDTemplateCreateBulk::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("cap"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("cap")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCap;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCap);
            setCap(refVal_setCap);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("contractType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("contractType")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setContractType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setContractType);
            setContractType(refVal_setContractType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setType);
            setType(refVal_setType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("image"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("image")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setImage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setImage);
            setImage(refVal_setImage);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("description"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("description")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDescription;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDescription);
            setDescription(refVal_setDescription);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("activeListing"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("activeListing")));
        if(!fieldValue.is_null())
        {
            bool refVal_setActiveListing;
            ok &= ModelBase::fromJson(fieldValue, refVal_setActiveListing);
            setActiveListing(refVal_setActiveListing);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ownerAddress"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ownerAddress")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setOwnerAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOwnerAddress);
            setOwnerAddress(refVal_setOwnerAddress);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("props"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("props")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SDTemplateCreateBulk_props> refVal_setProps;
            ok &= ModelBase::fromJson(fieldValue, refVal_setProps);
            setProps(refVal_setProps);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("publicContractMetadata"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("publicContractMetadata")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_setPublicContractMetadata;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPublicContractMetadata);
            setPublicContractMetadata(refVal_setPublicContractMetadata);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("publicTokenMetadata"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("publicTokenMetadata")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_setPublicTokenMetadata;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPublicTokenMetadata);
            setPublicTokenMetadata(refVal_setPublicTokenMetadata);
        }
    }
    return ok;
}

void SDTemplateCreateBulk::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_CapIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cap")), m_Cap));
    }
    if(m_ContractTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("contractType")), m_ContractType));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("type")), m_Type));
    }
    if(m_ImageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("image")), m_Image));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("description")), m_Description));
    }
    if(m_ActiveListingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("activeListing")), m_ActiveListing));
    }
    if(m_OwnerAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ownerAddress")), m_OwnerAddress));
    }
    if(m_PropsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("props")), m_Props));
    }
    if(m_PublicContractMetadataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("publicContractMetadata")), m_PublicContractMetadata));
    }
    if(m_PublicTokenMetadataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("publicTokenMetadata")), m_PublicTokenMetadata));
    }
}

bool SDTemplateCreateBulk::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("cap"))))
    {
        utility::string_t refVal_setCap;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cap"))), refVal_setCap );
        setCap(refVal_setCap);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("contractType"))))
    {
        utility::string_t refVal_setContractType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("contractType"))), refVal_setContractType );
        setContractType(refVal_setContractType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("type"))))
    {
        utility::string_t refVal_setType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("type"))), refVal_setType );
        setType(refVal_setType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("image"))))
    {
        utility::string_t refVal_setImage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("image"))), refVal_setImage );
        setImage(refVal_setImage);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("description"))))
    {
        utility::string_t refVal_setDescription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("description"))), refVal_setDescription );
        setDescription(refVal_setDescription);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("activeListing"))))
    {
        bool refVal_setActiveListing;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("activeListing"))), refVal_setActiveListing );
        setActiveListing(refVal_setActiveListing);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ownerAddress"))))
    {
        utility::string_t refVal_setOwnerAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ownerAddress"))), refVal_setOwnerAddress );
        setOwnerAddress(refVal_setOwnerAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("props"))))
    {
        std::shared_ptr<SDTemplateCreateBulk_props> refVal_setProps;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("props"))), refVal_setProps );
        setProps(refVal_setProps);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("publicContractMetadata"))))
    {
        std::shared_ptr<Object> refVal_setPublicContractMetadata;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("publicContractMetadata"))), refVal_setPublicContractMetadata );
        setPublicContractMetadata(refVal_setPublicContractMetadata);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("publicTokenMetadata"))))
    {
        std::shared_ptr<Object> refVal_setPublicTokenMetadata;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("publicTokenMetadata"))), refVal_setPublicTokenMetadata );
        setPublicTokenMetadata(refVal_setPublicTokenMetadata);
    }
    return ok;
}

utility::string_t SDTemplateCreateBulk::getName() const
{
    return m_Name;
}

void SDTemplateCreateBulk::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool SDTemplateCreateBulk::nameIsSet() const
{
    return m_NameIsSet;
}

void SDTemplateCreateBulk::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t SDTemplateCreateBulk::getCap() const
{
    return m_Cap;
}

void SDTemplateCreateBulk::setCap(const utility::string_t& value)
{
    m_Cap = value;
    m_CapIsSet = true;
}

bool SDTemplateCreateBulk::capIsSet() const
{
    return m_CapIsSet;
}

void SDTemplateCreateBulk::unsetCap()
{
    m_CapIsSet = false;
}
utility::string_t SDTemplateCreateBulk::getContractType() const
{
    return m_ContractType;
}

void SDTemplateCreateBulk::setContractType(const utility::string_t& value)
{
    m_ContractType = value;
    m_ContractTypeIsSet = true;
}

bool SDTemplateCreateBulk::contractTypeIsSet() const
{
    return m_ContractTypeIsSet;
}

void SDTemplateCreateBulk::unsetContractType()
{
    m_ContractTypeIsSet = false;
}
utility::string_t SDTemplateCreateBulk::getType() const
{
    return m_Type;
}

void SDTemplateCreateBulk::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool SDTemplateCreateBulk::typeIsSet() const
{
    return m_TypeIsSet;
}

void SDTemplateCreateBulk::unsetType()
{
    m_TypeIsSet = false;
}
utility::string_t SDTemplateCreateBulk::getImage() const
{
    return m_Image;
}

void SDTemplateCreateBulk::setImage(const utility::string_t& value)
{
    m_Image = value;
    m_ImageIsSet = true;
}

bool SDTemplateCreateBulk::imageIsSet() const
{
    return m_ImageIsSet;
}

void SDTemplateCreateBulk::unsetImage()
{
    m_ImageIsSet = false;
}
utility::string_t SDTemplateCreateBulk::getDescription() const
{
    return m_Description;
}

void SDTemplateCreateBulk::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool SDTemplateCreateBulk::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void SDTemplateCreateBulk::unsetDescription()
{
    m_DescriptionIsSet = false;
}
bool SDTemplateCreateBulk::isActiveListing() const
{
    return m_ActiveListing;
}

void SDTemplateCreateBulk::setActiveListing(bool value)
{
    m_ActiveListing = value;
    m_ActiveListingIsSet = true;
}

bool SDTemplateCreateBulk::activeListingIsSet() const
{
    return m_ActiveListingIsSet;
}

void SDTemplateCreateBulk::unsetActiveListing()
{
    m_ActiveListingIsSet = false;
}
utility::string_t SDTemplateCreateBulk::getOwnerAddress() const
{
    return m_OwnerAddress;
}

void SDTemplateCreateBulk::setOwnerAddress(const utility::string_t& value)
{
    m_OwnerAddress = value;
    m_OwnerAddressIsSet = true;
}

bool SDTemplateCreateBulk::ownerAddressIsSet() const
{
    return m_OwnerAddressIsSet;
}

void SDTemplateCreateBulk::unsetOwnerAddress()
{
    m_OwnerAddressIsSet = false;
}
std::shared_ptr<SDTemplateCreateBulk_props> SDTemplateCreateBulk::getProps() const
{
    return m_Props;
}

void SDTemplateCreateBulk::setProps(const std::shared_ptr<SDTemplateCreateBulk_props>& value)
{
    m_Props = value;
    m_PropsIsSet = true;
}

bool SDTemplateCreateBulk::propsIsSet() const
{
    return m_PropsIsSet;
}

void SDTemplateCreateBulk::unsetProps()
{
    m_PropsIsSet = false;
}
std::shared_ptr<Object> SDTemplateCreateBulk::getPublicContractMetadata() const
{
    return m_PublicContractMetadata;
}

void SDTemplateCreateBulk::setPublicContractMetadata(const std::shared_ptr<Object>& value)
{
    m_PublicContractMetadata = value;
    m_PublicContractMetadataIsSet = true;
}

bool SDTemplateCreateBulk::publicContractMetadataIsSet() const
{
    return m_PublicContractMetadataIsSet;
}

void SDTemplateCreateBulk::unsetPublicContractMetadata()
{
    m_PublicContractMetadataIsSet = false;
}
std::shared_ptr<Object> SDTemplateCreateBulk::getPublicTokenMetadata() const
{
    return m_PublicTokenMetadata;
}

void SDTemplateCreateBulk::setPublicTokenMetadata(const std::shared_ptr<Object>& value)
{
    m_PublicTokenMetadata = value;
    m_PublicTokenMetadataIsSet = true;
}

bool SDTemplateCreateBulk::publicTokenMetadataIsSet() const
{
    return m_PublicTokenMetadataIsSet;
}

void SDTemplateCreateBulk::unsetPublicTokenMetadata()
{
    m_PublicTokenMetadataIsSet = false;
}
}
}
}
}


