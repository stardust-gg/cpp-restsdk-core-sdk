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



#include "StardustCoreSDK/model/SDOrderCreateTokens.h"

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {



SDOrderCreateTokens::SDOrderCreateTokens()
{
    m_TokenId = 0;
    m_TokenIdIsSet = false;
    m_Amount = utility::conversions::to_string_t("");
    m_AmountIsSet = false;
}

SDOrderCreateTokens::~SDOrderCreateTokens()
{
}

void SDOrderCreateTokens::validate()
{
    // TODO: implement validation
}

web::json::value SDOrderCreateTokens::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TokenIdIsSet)
    {
        val[utility::conversions::to_string_t(U("tokenId"))] = ModelBase::toJson(m_TokenId);
    }
    if(m_AmountIsSet)
    {
        val[utility::conversions::to_string_t(U("amount"))] = ModelBase::toJson(m_Amount);
    }

    return val;
}

bool SDOrderCreateTokens::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("tokenId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tokenId")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setTokenId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTokenId);
            setTokenId(refVal_setTokenId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("amount"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("amount")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAmount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAmount);
            setAmount(refVal_setAmount);
        }
    }
    return ok;
}

void SDOrderCreateTokens::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_TokenIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tokenId")), m_TokenId));
    }
    if(m_AmountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("amount")), m_Amount));
    }
}

bool SDOrderCreateTokens::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("tokenId"))))
    {
        int32_t refVal_setTokenId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tokenId"))), refVal_setTokenId );
        setTokenId(refVal_setTokenId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("amount"))))
    {
        utility::string_t refVal_setAmount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("amount"))), refVal_setAmount );
        setAmount(refVal_setAmount);
    }
    return ok;
}

int32_t SDOrderCreateTokens::getTokenId() const
{
    return m_TokenId;
}

void SDOrderCreateTokens::setTokenId(int32_t value)
{
    m_TokenId = value;
    m_TokenIdIsSet = true;
}

bool SDOrderCreateTokens::tokenIdIsSet() const
{
    return m_TokenIdIsSet;
}

void SDOrderCreateTokens::unsetTokenId()
{
    m_TokenIdIsSet = false;
}
utility::string_t SDOrderCreateTokens::getAmount() const
{
    return m_Amount;
}

void SDOrderCreateTokens::setAmount(const utility::string_t& value)
{
    m_Amount = value;
    m_AmountIsSet = true;
}

bool SDOrderCreateTokens::amountIsSet() const
{
    return m_AmountIsSet;
}

void SDOrderCreateTokens::unsetAmount()
{
    m_AmountIsSet = false;
}
}
}
}
}


