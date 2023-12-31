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



#include "StardustCoreSDK/model/SDPlayerWalletGetResponse.h"

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {



SDPlayerWalletGetResponse::SDPlayerWalletGetResponse()
{
    m_WalletIsSet = false;
}

SDPlayerWalletGetResponse::~SDPlayerWalletGetResponse()
{
}

void SDPlayerWalletGetResponse::validate()
{
    // TODO: implement validation
}

web::json::value SDPlayerWalletGetResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_WalletIsSet)
    {
        val[utility::conversions::to_string_t(U("wallet"))] = ModelBase::toJson(m_Wallet);
    }

    return val;
}

bool SDPlayerWalletGetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("wallet"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("wallet")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<SDPlayerWalletGetResponse_wallet_inner>> refVal_setWallet;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWallet);
            setWallet(refVal_setWallet);
        }
    }
    return ok;
}

void SDPlayerWalletGetResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_WalletIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("wallet")), m_Wallet));
    }
}

bool SDPlayerWalletGetResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("wallet"))))
    {
        std::vector<std::shared_ptr<SDPlayerWalletGetResponse_wallet_inner>> refVal_setWallet;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("wallet"))), refVal_setWallet );
        setWallet(refVal_setWallet);
    }
    return ok;
}

std::vector<std::shared_ptr<SDPlayerWalletGetResponse_wallet_inner>>& SDPlayerWalletGetResponse::getWallet()
{
    return m_Wallet;
}

void SDPlayerWalletGetResponse::setWallet(const std::vector<std::shared_ptr<SDPlayerWalletGetResponse_wallet_inner>>& value)
{
    m_Wallet = value;
    m_WalletIsSet = true;
}

bool SDPlayerWalletGetResponse::walletIsSet() const
{
    return m_WalletIsSet;
}

void SDPlayerWalletGetResponse::unsetWallet()
{
    m_WalletIsSet = false;
}
}
}
}
}


